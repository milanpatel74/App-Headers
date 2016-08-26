/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMemPageCardController.h>
#import <Facebook/FBPageVideosCellDelegate.h>
#import <Facebook/FBCardViewProvider.h>

@class FBPageVideosCell, FBPageVideosViewModel, NSString;

@interface FBMemPageVideosCardController : FBMemPageCardController <FBPageVideosCellDelegate, FBCardViewProvider> {

	FBPageVideosCell* _cardCell;
	FBPageVideosViewModel* _viewModel;
	NSString* _videoHomeStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
-(void)configureWithPage:(id)arg1 ;
-(void)openAllVideos;
-(void)dealloc;
-(UIView*<FBPageCardProtocol>)cardView;
@end
