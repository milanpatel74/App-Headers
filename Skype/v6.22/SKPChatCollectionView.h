/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <Skype/MKCollectionView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPanGestureRecognizer, NSString;

@interface SKPChatCollectionView : MKCollectionView <UIGestureRecognizerDelegate> {

	BOOL _isRevealingTimestamps;
	/*^block*/id _contentSizeDidNotChangeBlock;
	UIPanGestureRecognizer* _timestampGestureRecognizer;

}

@property (nonatomic,retain) UIPanGestureRecognizer * timestampGestureRecognizer;              //@synthesize timestampGestureRecognizer=_timestampGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL isRevealingTimestamps;                                       //@synthesize isRevealingTimestamps=_isRevealingTimestamps - In the implementation block
@property (nonatomic,copy) id contentSizeDidNotChangeBlock;                                    //@synthesize contentSizeDidNotChangeBlock=_contentSizeDidNotChangeBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)collectionViewWithFrame:(CGRect)arg1 ;
-(void)adjustContentOffsetForSizeChangeAtIndexPath:(id)arg1 ;
-(void)setTimestampGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)timestampGestureRecognizer;
-(void)setIsRevealingTimestamps:(BOOL)arg1 ;
-(BOOL)isRevealingTimestamps;
-(id)contentSizeDidNotChangeBlock;
-(void)setContentSizeDidNotChangeBlock:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(NSString *)debugDescription;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
