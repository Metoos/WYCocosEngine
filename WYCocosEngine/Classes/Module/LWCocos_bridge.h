//
//  LWCocos_bridge.h
//  cocoaTest
//
//  Created by life on 2024/4/12.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface LWCocos_bridge : NSObject

@property(nonatomic, weak) UIView *renderView;

@property (nonatomic, copy) UIViewController *(^gameVCBlock)(void);

///当前游戏资源文件路径前缀（例：FruitRes/）
@property(nonatomic) NSString *gamesResPrefix;

+ (instancetype)shared;

- (void)onStart;

- (void)onRestart;

- (void)onLoop;

- (void)onExit;

- (void)onClose;

- (void)onPause;

- (void)onResume;

- (void)onDestroy;

@end

NS_ASSUME_NONNULL_END
