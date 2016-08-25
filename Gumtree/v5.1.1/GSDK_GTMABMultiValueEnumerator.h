/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class GSDK_GTMABMultiValue;

@interface GSDK_GTMABMultiValueEnumerator : NSEnumerator {

	void* ref_;
	GSDK_GTMABMultiValue* enumeree_;
	unsigned long long mutations_;
	unsigned long long count_;
	unsigned long long index_;
	BOOL useLabels_;

}
+(id)valueEnumeratorFor:(id)arg1 ;
+(id)labelEnumeratorFor:(id)arg1 ;
-(id)initWithEnumeree:(id)arg1 useLabels:(BOOL)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PL22*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)nextObject;
@end
