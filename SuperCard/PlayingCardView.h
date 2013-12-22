//
//  ViewController.m
//  SuperCard
//
//  Created by Kai Ren on 12/21/13.
//  Copyright (c) 2013 Kai Ren. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (strong, nonatomic) NSString *suit;
@property (nonatomic) BOOL faceUp;

- (void)pinch:(UIPinchGestureRecognizer *)gesture;

@end
