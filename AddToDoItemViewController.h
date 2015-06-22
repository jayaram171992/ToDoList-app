//
//  AddToDoItemViewController.h
//  Alpha touch
//
//  Created by Ramesh, Ramachandran on 19/06/15.
//  Copyright (c) 2015 Ramesh, Ramachandran. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ToDoItem.h"

@interface AddToDoItemViewController : UIViewController

@property ToDoItem *toDoItem;

- (IBAction) unwindToList:(UIStoryboardSegue *)segue;

@end
