//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKPAddContactPickerController, SKPContact, SKPConversation;

@protocol SKPAddContactPickerControllerDelegate <NSObject>

@optional
- (void)addContactPickerController:(SKPAddContactPickerController *)arg1 callConversation:(SKPConversation *)arg2;
- (void)addContactPickerController:(SKPAddContactPickerController *)arg1 didSelectContact:(SKPContact *)arg2;
- (void)addContactPickerControllerDidCancel:(SKPAddContactPickerController *)arg1;
@end

