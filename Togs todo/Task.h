//
//  Task.h
//  Togs todo
//
//  Created by Tejas Mehta on 7/12/14.
//  Copyright (c) 2014 Tejas Mehta. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Task : NSObject

- (id)initWithName:(NSString *) name;

@property (nonatomic, copy) NSString *name;

@end
