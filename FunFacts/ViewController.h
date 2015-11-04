//
//  ViewController.h
//  FunFacts
//
//  Created by Calla on 8/19/15.
//  Copyright (c) 2015 Calla. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;

@interface ViewController : UIViewController

@property (strong, nonatomic) FactBook *factBook;
@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;

@end

