/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:41 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@interface MNPageResponsivenessViewModel : FBValueObject <NSCopying> {

	BOOL _isAway;
	unsigned long long _responsiveness;

}

@property (nonatomic,readonly) BOOL isAway;                                    //@synthesize isAway=_isAway - In the implementation block
@property (nonatomic,readonly) unsigned long long responsiveness;              //@synthesize responsiveness=_responsiveness - In the implementation block
-(unsigned long long)responsiveness;
-(id)initWithIsAway:(BOOL)arg1 responsiveness:(unsigned long long)arg2 ;
-(BOOL)isAway;
@end
