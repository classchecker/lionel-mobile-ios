//
//  BulletinExpandedViewController.h
//  Lionel3
//
//  Created by Rahul Arya on 4/4/2016.
//  Copyright © 2016 No Empty Promises. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BulletinExpandedViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;
@property (weak, nonatomic) IBOutlet UILabel *authorLabel;
@property (weak, nonatomic) IBOutlet UITextView *previewLabel;
@property (weak, nonatomic) IBOutlet UITextView *textLabel;

@property NSMutableString *header;
@property NSMutableString *date;
@property NSMutableString *author;
@property NSMutableString *preview;
@property NSString *desc;

@property (nonatomic, weak) IBOutlet NSLayoutConstraint *textViewHeightConstraint;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint *previewLabelHeightConstraint;

@end
