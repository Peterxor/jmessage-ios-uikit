//
//  JCHATFootTableViewCell.h
//  JChat
//
//  Created by oshumini on 15/12/15.
//  Copyright © 2015年 HXHG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JMUIGroupChatDetailViewController.h"

@interface JMUIFootTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *footerTittle;
@property (weak, nonatomic) IBOutlet UILabel *userName;
@property (weak, nonatomic) IBOutlet UIButton *quitGroupBtn;
@property (weak, nonatomic) IBOutlet UIImageView *arrow;
@property (strong, nonatomic)JMUIGroupChatDetailViewController *delegate;
@property (strong, nonatomic)UIView *baseLine;
- (void)setDataWithGroupName:(NSString *)groupName;
- (void)layoutToClearChatRecord;
- (void)layoutToQuitGroup;
@end
