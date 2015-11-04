//
//  FactBook.h
//  FunFacts
//
//  Created by Calla on 8/23/15.
//  Copyright (c) 2015 Calla. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;
- (NSString *)randomFact;

@end
