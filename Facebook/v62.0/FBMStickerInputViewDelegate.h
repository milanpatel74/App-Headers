/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMStickerInputViewDelegate <NSObject>
@optional
-(void)stickerInputView:(id)arg1 didBeginSearching:(id)arg2 completion:(/*^block*/id)arg3;
-(void)stickerInputView:(id)arg1 didEndSearching:(id)arg2 completion:(/*^block*/id)arg3;
-(void)stickerInputView:(id)arg1 didTapTabWithTitle:(id)arg2;

@required
-(void)stickerInputView:(id)arg1 didSelectSticker:(id)arg2;
-(void)didSelectStickerStoreWith:(unsigned long long)arg1 sourceView:(id)arg2;

@end
