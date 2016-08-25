/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRCommandDelegate;
@interface MRCommand : NSObject {

	id<MRCommandDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MRCommandDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedCommandClassMap;
+(Class)commandClassForString:(id)arg1 ;
+(void)registerCommand:(Class)arg1 ;
+(id)commandForString:(id)arg1 ;
+(id)commandType;
-(double)floatFromParameters:(id)arg1 forKey:(id)arg2 withDefault:(double)arg3 ;
-(id)stringFromParameters:(id)arg1 forKey:(id)arg2 ;
-(BOOL)requiresUserInteractionForPlacementType:(unsigned long long)arg1 ;
-(BOOL)executableWhileBlockingRequests;
-(BOOL)executeWithParams:(id)arg1 ;
-(double)floatFromParameters:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolFromParameters:(id)arg1 forKey:(id)arg2 ;
-(int)intFromParameters:(id)arg1 forKey:(id)arg2 ;
-(id)urlFromParameters:(id)arg1 forKey:(id)arg2 ;
-(void)setDelegate:(id<MRCommandDelegate>)arg1 ;
-(id<MRCommandDelegate>)delegate;
@end
