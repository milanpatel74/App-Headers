//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SKPSearchContactsViewController;

@protocol SKPSearchContactsViewControllerDelegate <NSObject>
- (void)searchContactsViewController:(SKPSearchContactsViewController *)arg1 didSelectContactWithConversationIdentity:(NSString *)arg2;
- (void)searchContactsViewController:(SKPSearchContactsViewController *)arg1 shouldShowSkypeDirectoryWithSearchText:(NSString *)arg2;
- (void)searchContactsViewControllerDidDismiss:(SKPSearchContactsViewController *)arg1;
@end

