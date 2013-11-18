//
//  FBCDDetailViewController.h
//  FailedBanksCD
//
//  Created by Thomas Grant on 18/11/2013.
//  Copyright (c) 2013 Thomas Grant. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
