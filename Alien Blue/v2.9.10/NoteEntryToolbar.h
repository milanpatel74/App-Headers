/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/ABToolbar.h>

@interface NoteEntryToolbar : ABToolbar {

	id controlDelegate_;

}

@property (nonatomic,retain) id controlDelegate; 
-(void)addBarItem:(id)arg1 ;
-(id)controlDelegate;
-(void)addTextMessage:(id)arg1 ;
-(void)addPhotoOptions;
-(void)drawShadowInRect:(CGRect)arg1 ;
-(void)setControlDelegate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
