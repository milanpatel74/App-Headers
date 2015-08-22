/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface ITCAction : NSObject {

	BOOL _destructive;
	NSString* _title;
	SEL _selector;

}

@property (assign,getter=isDestructive,nonatomic) BOOL destructive;              //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) SEL selector;                                       //@synthesize selector=_selector - In the implementation block
+(id)actionWithTitle:(id)arg1 selector:(SEL)arg2 ;
+(id)destructiveActionWithTitle:(id)arg1 selector:(SEL)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(NSString *)title;
-(SEL)selector;
-(BOOL)isDestructive;
-(void)setDestructive:(BOOL)arg1 ;
@end
