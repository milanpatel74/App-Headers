/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class NSArray, FBSearchResultsContext, FBSearchComponentModel;

@interface FBSearchResultsUserImagesHScrollComponent : CKCompositeComponent {

	NSArray* _profilePhotos;
	FBSearchResultsContext* _context;
	FBSearchComponentModel* _model;

}

@property (nonatomic,copy,readonly) NSArray * profilePhotos;                  //@synthesize profilePhotos=_profilePhotos - In the implementation block
@property (nonatomic,readonly) FBSearchResultsContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) FBSearchComponentModel * model;                //@synthesize model=_model - In the implementation block
+(id)newWithModel:(id)arg1 context:(id)arg2 profilePhotos:(id)arg3 ;
-(void)_didHScroll:(id)arg1 ;
-(NSArray *)profilePhotos;
-(FBSearchResultsContext *)context;
-(FBSearchComponentModel *)model;
@end
