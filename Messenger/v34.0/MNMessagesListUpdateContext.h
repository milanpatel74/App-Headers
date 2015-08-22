/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@interface MNMessagesListUpdateContext : FBValueObject <NSCopying> {

	long long _currentScrollPosition;
	unsigned long long _scrollToRowIndex;

}

@property (nonatomic,readonly) long long currentScrollPosition;                  //@synthesize currentScrollPosition=_currentScrollPosition - In the implementation block
@property (nonatomic,readonly) unsigned long long scrollToRowIndex;              //@synthesize scrollToRowIndex=_scrollToRowIndex - In the implementation block
-(long long)currentScrollPosition;
-(id)initWithCurrentScrollPosition:(long long)arg1 scrollToRowIndex:(unsigned long long)arg2 ;
-(unsigned long long)scrollToRowIndex;
@end
