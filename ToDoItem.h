//
//  ToDoItem.h
//  Alpha touch
//
//  Created by Ramesh, Ramachandran on 19/06/15.
//  Copyright (c) 2015 Ramesh, Ramachandran. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
