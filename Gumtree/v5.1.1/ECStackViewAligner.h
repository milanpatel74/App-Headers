/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ECStackView, NSArray;

@interface ECStackViewAligner : NSObject {

	ECStackView* _owner;
	NSArray* _constraints;

}

@property (nonatomic,copy) NSArray * constraints;                       //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,__weak,readonly) ECStackView * owner;              //@synthesize owner=_owner - In the implementation block
-(void)updateConstraintsWithAlignmentAttribute:(long long)arg1 lengthAttribute:(long long)arg2 ;
-(NSArray *)constraints;
-(void)updateConstraints;
-(void)setNeedsUpdateConstraints;
-(ECStackView *)owner;
-(id)initWithOwner:(id)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
@end
