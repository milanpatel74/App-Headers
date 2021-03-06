/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGModernViewModel.h>

@class TGModernColorViewModel, TGModernTextViewModel;

@interface TGReplyHeaderModel : TGModernViewModel {

	TGModernColorViewModel* _lineModel;
	TGModernTextViewModel* _nameModel;
	TGModernTextViewModel* _textModel;
	BOOL _incoming;
	BOOL _system;
	double _leftInset;
	double _cachedLayoutWidth;
	double _cachedLeftInset;

}
+(id)colorForMediaText:(BOOL)arg1 ;
+(double)thumbnailCornerRadius;
-(void)layoutForContainerSize:(CGSize)arg1 ;
-(id)initWithPeer:(id)arg1 incoming:(BOOL)arg2 text:(id)arg3 truncateTextInTheMiddle:(BOOL)arg4 textColor:(id)arg5 leftInset:(double)arg6 system:(BOOL)arg7 ;
-(void)bindSpecialViewsToContainer:(id)arg1 viewStorage:(id)arg2 atItemPosition:(CGPoint)arg3 ;
-(void)layoutForContainerSize:(CGSize)arg1 updateContent:(BOOL*)arg2 ;
@end

