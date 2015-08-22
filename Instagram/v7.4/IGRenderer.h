/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:19 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray, IGContext, IGFilter;

@interface IGRenderer : NSObject {

	NSMutableArray* _outputs;
	IGContext* _context;
	IGFilter* _filter;

}

@property (nonatomic,readonly) IGContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) IGFilter * filter;                  //@synthesize filter=_filter - In the implementation block
-(id)renderByConsumingSource:(id)arg1 ;
-(void)render:(id)arg1 to:(id)arg2 ;
-(void)renderTo:(id)arg1 ;
-(void)render;
-(void)render:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)flush;
-(IGContext *)context;
-(void)setFilter:(IGFilter *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(IGFilter *)filter;
-(void)removeOutput:(id)arg1 ;
-(void)addOutput:(id)arg1 ;
@end
