/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@protocol FBReactionPhotoGridComponentDelegate;
@class NSArray, FBFeedToolbox;

@interface FBReactionPhotoGridComponent : CKCompositeComponent {

	NSArray* _photos;
	FBFeedToolbox* _toolbox;
	id<FBReactionPhotoGridComponentDelegate> _delegate;
	SEL _alternateTapAction;
	vector<FBCollageLayoutComponentChild, std::__1::allocator<FBCollageLayoutComponentChild> >* _children;

}

@property (assign,nonatomic) vector<FBCollageLayoutComponentChild children;                         //@synthesize children=_children - In the implementation block
@property (nonatomic,copy) NSArray * photos;                                                        //@synthesize photos=_photos - In the implementation block
@property (nonatomic,retain) FBFeedToolbox * toolbox;                                               //@synthesize toolbox=_toolbox - In the implementation block
@property (assign,nonatomic,__weak) id<FBReactionPhotoGridComponentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) SEL alternateTapAction;                                                //@synthesize alternateTapAction=_alternateTapAction - In the implementation block
+(id)newWithPhotoAttachments:(id)arg1 toolbox:(id)arg2 insets:(UIEdgeInsets)arg3 delegate:(id)arg4 alternateTapAction:(SEL)arg5 ;
-(FBFeedToolbox *)toolbox;
-(void)setToolbox:(FBFeedToolbox *)arg1 ;
-(void)setAlternateTapAction:(SEL)arg1 ;
-(SEL)alternateTapAction;
-(void)setDelegate:(id<FBReactionPhotoGridComponentDelegate>)arg1 ;
-(id<FBReactionPhotoGridComponentDelegate>)delegate;
-(void)setPhotos:(NSArray *)arg1 ;
-(NSArray *)photos;
-(void)setChildren:(vector<FBCollageLayoutComponentChild)arg1 ;
-(vector<FBCollageLayoutComponentChild)children;
@end
