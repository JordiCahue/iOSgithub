//
//  DetailViewController.h
//  iOSgithub
//
//  Created by Jordi Cahue Mestre on 21/2/15.
//  Copyright (c) 2015 PROMED-APPS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

