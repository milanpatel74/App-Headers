/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray, NSString;

@interface FBPlatformDebugGroup : NSObject {

	NSArray* _items;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSArray * items;               //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
+(id)groupWithTitle:(id)arg1 items:(id)arg2 ;
-(id)initWithTitle:(id)arg1 items:(id)arg2 ;
-(id)init;
-(NSString *)title;
-(NSArray *)items;
@end
