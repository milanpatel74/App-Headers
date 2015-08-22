/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/TAGFunctionCallImplementation.h>

@protocol TAGCustomEvaluator;
@interface TAGCustomFunctionCall : TAGFunctionCallImplementation {

	id<TAGCustomEvaluator> _functionCallEvaluator;

}

@property (nonatomic,retain) id<TAGCustomEvaluator> functionCallEvaluator;              //@synthesize functionCallEvaluator=_functionCallEvaluator - In the implementation block
+(id)functionId;
+(id)functionCallNameKey;
+(id)additionalParametersKey;
-(id<TAGCustomEvaluator>)functionCallEvaluator;
-(id)initWithEvaluator:(id)arg1 ;
-(void)setFunctionCallEvaluator:(id<TAGCustomEvaluator>)arg1 ;
-(BOOL)isCacheable;
-(id)evaluate:(id)arg1 ;
@end
