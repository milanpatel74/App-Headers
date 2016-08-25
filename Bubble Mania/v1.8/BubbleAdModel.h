/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/DriveModel.h>

@class PromotionAdBillboard;

@interface BubbleAdModel : DriveModel {

	BOOL shouldShowPromo;
	PromotionAdBillboard* ad;

}

@property (nonatomic,retain) PromotionAdBillboard * ad; 
@property (assign,nonatomic) BOOL shouldShowPromo; 
-(void)gameDataDidUpdate:(id)arg1 ;
-(void)downloadComplete:(id)arg1 ;
-(void)setAd:(PromotionAdBillboard *)arg1 ;
-(id)driveStarInstanceForThisModel;
-(BOOL)wasTapped:(CGPoint)arg1 ;
-(id)initWithAd:(id)arg1 ;
-(void)setShouldShowPromo:(BOOL)arg1 ;
-(Vertex)getPosition;
-(BOOL)shouldShowPromo;
-(void)loadAllNecessaryFiles;
-(void)dealloc;
-(BOOL)shouldShow;
-(PromotionAdBillboard *)ad;
@end
