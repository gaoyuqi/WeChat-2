//
//  ChatViewController.h
//  WeChat
//
//  Created by Jiao Liu on 11/25/13.
//  Copyright (c) 2013 Jiao Liu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChatViewController : UIViewController <UIAlertViewDelegate,UITableViewDataSource,UITextFieldDelegate,UITableViewDelegate>
{
    NSString *user;
}

@property (nonatomic, retain) NSString *user;

@end