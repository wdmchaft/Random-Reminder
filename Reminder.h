//
//  Reminder.h
//  remindful-base
//
//  Created by e7systems on 11/27/10.
//  Copyright (c) 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface Reminder : NSObject {

}
// public methods
- (NSDate *)scheduleReminder:(Reminder *)reminder action:(NSString *)action quote:(NSString *)quote author:(NSString *)author startTime:(int)startTime endTime:(int)endTime repeat:(BOOL)repeat; 
- (void)cancelAllReminders;
- (void)getAllReminders;
@end
