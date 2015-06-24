//
//  ToDoItem.h
//  ToDoList
//
//  Created by Flueg H.G. Lau on 5/22/15.
//  Copyright (c) 2015 Flueg H.G. Lau. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
