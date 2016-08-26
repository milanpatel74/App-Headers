/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKStatefulViewComponent.h>

@class NSArray, FBFeedToolbox;

@interface FBMSSlideShowMediaComponent : CKStatefulViewComponent {

	NSArray* _imageURLs;
	FBFeedToolbox* _toolbox;

}

@property (nonatomic,copy,readonly) NSArray * imageURLs;              //@synthesize imageURLs=_imageURLs - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;               //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithImageURLs:(id)arg1 uniqueID:(id)arg2 toolbox:(id)arg3 ;
-(FBFeedToolbox *)toolbox;
-(void)animate:(BOOL)arg1 ;
-(NSArray *)imageURLs;
@end
