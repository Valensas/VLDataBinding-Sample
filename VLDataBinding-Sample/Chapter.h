//
//  Chapter.h
//  DataBinding
//
//  Created by Can Yaman on 02/04/14.
//  Copyright (c) 2014 Valensas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Jastor.h"

@interface Chapter : Jastor
@property(nonatomic)NSString *title;
@property(nonatomic)NSString *subtitle;
@property(nonatomic)NSString *content;
@end
