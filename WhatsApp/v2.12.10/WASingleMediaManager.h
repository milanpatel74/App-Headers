/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAMediaManager.h>

@class WAMessage;

@interface WASingleMediaManager : WAMediaManager {

	WAMessage* _message;

}
-(unsigned long long)indexFromIndexPath:(id)arg1 ;
-(id)indexPathFromIndex:(unsigned long long)arg1 ;
-(id)messageAtIndexPath:(id)arg1 ;
-(id)indexPathOfMessage:(id)arg1 ;
-(BOOL)isForSingleItem;
-(void)deleteMessagesAtIndexPaths:(id)arg1 ;
-(unsigned long long)numberOfItems;
-(id)initWithMessage:(id)arg1 ;
@end
