/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNMessageCellLayoutElementVisitor.h>

@class NSMutableArray, NSIndexPath, NSArray, NSString;

@interface MNMessageCellLayoutElementAttributesCalculationVisitor : NSObject <MNMessageCellLayoutElementVisitor> {

	NSMutableArray* _allLayoutAttributes;
	CGRect _cellFrame;
	Class _layoutAttributesClass;
	NSIndexPath* _indexPath;
	CGSize _contentSize;

}

@property (nonatomic,readonly) CGSize contentSize;                              //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allLayoutAttributes; 
@property (nonatomic,copy) NSIndexPath * indexPath;                             //@synthesize indexPath=_indexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)visitVerticalSpaceElement:(id)arg1 ;
-(void)visitBlockViewLayoutElement:(id)arg1 ;
-(void)visitRelativeViewLayoutElement:(id)arg1 ;
-(id)initWithWithCollectionViewWidth:(double)arg1 layoutAttributesClass:(Class)arg2 ;
-(NSArray *)allLayoutAttributes;
-(void)visitLayoutElements:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)contentSize;
-(NSIndexPath *)indexPath;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
@end
