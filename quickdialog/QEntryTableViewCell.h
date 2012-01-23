//                                
// Copyright 2011 ESCOZ Inc  - http://escoz.com
// 
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this 
// file except in compliance with the License. You may obtain a copy of the License at 
// 
// http://www.apache.org/licenses/LICENSE-2.0 
// 
// Unless required by applicable law or agreed to in writing, software distributed under
// the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF 
// ANY KIND, either express or implied. See the License for the specific language governing
// permissions and limitations under the License.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@class QEntryElement;
@class QuickDialogTableView;


@interface QEntryTableViewCell : UITableViewCell<UITextFieldDelegate> {

    QEntryElement *_entryElement;
    UITextField *_textField;

@protected
    __unsafe_unretained QuickDialogTableView *_quickformTableView;
    UIToolbar *_actionBar;
}

@property(nonatomic, strong) UITextField *textField;
@property(nonatomic, unsafe_unretained) id<QEntryElementDelegate> delegate;

- (void)prepareForElement:(QEntryElement *)element inTableView:(QuickDialogTableView *)tableView;

- (void)createSubviews;

- (QEntryElement *)findNextElementToFocusOn;
- (QEntryElement *)findPreviousElementToFocusOn;

- (void)recalculateEntryFieldPosition;


@end