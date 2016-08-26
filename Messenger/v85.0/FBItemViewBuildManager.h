/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBItemViewConfigBuilder, FBItemContentViewConfigBuilder;

@interface FBItemViewBuildManager : NSObject {

	FBItemViewConfigBuilder* _builder;
	FBItemContentViewConfigBuilder* _contentBuilder;

}

@property (nonatomic,retain) FBItemViewConfigBuilder * builder;                            //@synthesize builder=_builder - In the implementation block
@property (nonatomic,retain) FBItemContentViewConfigBuilder * contentBuilder;              //@synthesize contentBuilder=_contentBuilder - In the implementation block
+(id)_newWithConfig:(id)arg1 contentConfig:(id)arg2 ;
+(id)managerIgnoringClassLevelOverrides;
+(id)managerForView:(id)arg1 ;
+(id)manager;
-(FBItemContentViewConfigBuilder *)contentBuilder;
-(id)buildView;
-(id)_initWithBuilder:(id)arg1 contentBuilder:(id)arg2 ;
-(void)loadFromView:(id)arg1 ;
-(id)buildConfig;
-(void)applyToView:(id)arg1 ;
-(CGSize)threadSafeSizeThatFits:(CGSize)arg1 ;
-(void)setBuilder:(FBItemViewConfigBuilder *)arg1 ;
-(void)setContentBuilder:(FBItemContentViewConfigBuilder *)arg1 ;
-(id)_init;
-(FBItemViewConfigBuilder *)builder;
@end
