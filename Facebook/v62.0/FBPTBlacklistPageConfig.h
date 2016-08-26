/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, NSArray;

@interface FBPTBlacklistPageConfig : NSObject {

	NSAttributedString* _header;
	NSArray* _titles;
	/*^block*/id _closeTapHandler;
	/*^block*/id _headerTapHandler;
	/*^block*/id _rowTapHandler;

}

@property (nonatomic,copy) NSAttributedString * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSArray * titles;                         //@synthesize titles=_titles - In the implementation block
@property (nonatomic,copy) id closeTapHandler;                       //@synthesize closeTapHandler=_closeTapHandler - In the implementation block
@property (nonatomic,copy) id headerTapHandler;                      //@synthesize headerTapHandler=_headerTapHandler - In the implementation block
@property (nonatomic,copy) id rowTapHandler;                         //@synthesize rowTapHandler=_rowTapHandler - In the implementation block
-(id)initWithHeader:(id)arg1 rowTitles:(id)arg2 onCloseTapped:(/*^block*/id)arg3 onHeaderTapped:(/*^block*/id)arg4 onRowTapped:(/*^block*/id)arg5 ;
-(void)setCloseTapHandler:(id)arg1 ;
-(void)setHeaderTapHandler:(id)arg1 ;
-(void)setRowTapHandler:(id)arg1 ;
-(id)closeTapHandler;
-(id)headerTapHandler;
-(id)rowTapHandler;
-(void)setTitles:(NSArray *)arg1 ;
-(NSArray *)titles;
-(void)setHeader:(NSAttributedString *)arg1 ;
-(NSAttributedString *)header;
@end
