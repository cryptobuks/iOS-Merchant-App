//
//  BCMTextFieldTableViewCell.h
//  Merchant
//
//  Created by User on 11/3/14.
//  Copyright (c) 2014 com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BCMTextField;

@class BCMTextFieldTableViewCell;

@protocol BCMTextFieldTableViewCellDelegate <NSObject>

- (void)textFieldTableViewCellDidBeingEditing:(BCMTextFieldTableViewCell *)cell;
- (void)textFieldTableViewCell:(BCMTextFieldTableViewCell *)cell didEndEditingWithText:(NSString *)text;

@end

@interface BCMTextFieldTableViewCell : UITableViewCell

@property (weak, nonatomic) id<BCMTextFieldTableViewCellDelegate> delegate;
@property (strong, nonatomic) UIImage *textFieldImage;

@property (weak, nonatomic) IBOutlet BCMTextField *textField;

@property (assign, nonatomic) BOOL canEdit;

@end