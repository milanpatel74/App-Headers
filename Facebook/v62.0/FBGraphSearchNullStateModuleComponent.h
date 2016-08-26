/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@protocol FBSearchInputContextProtocol;
@class FBSearchComponentModel;

@interface FBGraphSearchNullStateModuleComponent : CKCompositeComponent {

	FBSearchComponentModel* _model;
	id<FBSearchInputContextProtocol> _context;

}

@property (nonatomic,readonly) FBSearchComponentModel * model;                        //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) id<FBSearchInputContextProtocol> context;              //@synthesize context=_context - In the implementation block
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
+(id)headerModelFromCombinedEndpointModule:(id)arg1 index:(unsigned long long)arg2 parentModel:(id)arg3 suppressAccessoryText:(BOOL)arg4 ;
-(id<FBSearchInputContextProtocol>)context;
-(FBSearchComponentModel *)model;
@end
