/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBFilteredUIImage, UIView, NSMutableArray, UIImage;

@interface CPUFiltererWrapper : NSObject {

	BOOL _isThumbnail;
	BOOL _loadedDisplayImageSynchronously;
	FBFilteredUIImage* _cpuFilterer;
	UIView* _view;
	NSMutableArray* _cancelableFilterRequests;
	/*^block*/id _completionBlock;
	UIImage* _autoEnhancedImage;

}

@property (nonatomic,retain) FBFilteredUIImage * cpuFilterer;                        //@synthesize cpuFilterer=_cpuFilterer - In the implementation block
@property (nonatomic,retain) UIView * view;                                          //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) NSMutableArray * cancelableFilterRequests;              //@synthesize cancelableFilterRequests=_cancelableFilterRequests - In the implementation block
@property (nonatomic,copy) id completionBlock;                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) UIImage * autoEnhancedImage;                            //@synthesize autoEnhancedImage=_autoEnhancedImage - In the implementation block
@property (assign,nonatomic) BOOL isThumbnail;                                       //@synthesize isThumbnail=_isThumbnail - In the implementation block
@property (assign,nonatomic) BOOL loadedDisplayImageSynchronously;                   //@synthesize loadedDisplayImageSynchronously=_loadedDisplayImageSynchronously - In the implementation block
-(FBFilteredUIImage *)cpuFilterer;
-(void)setCpuFilterer:(FBFilteredUIImage *)arg1 ;
-(NSMutableArray *)cancelableFilterRequests;
-(void)setCancelableFilterRequests:(NSMutableArray *)arg1 ;
-(UIImage *)autoEnhancedImage;
-(void)setAutoEnhancedImage:(UIImage *)arg1 ;
-(BOOL)loadedDisplayImageSynchronously;
-(void)setLoadedDisplayImageSynchronously:(BOOL)arg1 ;
-(id)init;
-(UIView *)view;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(BOOL)isThumbnail;
-(void)setIsThumbnail:(BOOL)arg1 ;
@end
