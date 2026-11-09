/* IL2CPP: Rotatelab.GameExtensions$$PreventFailSearchDuringAnimation
PrimeTween_Tween_o Rotatelab_GameExtensions__PreventFailSearchDuringAnimation (PrimeTween_Tween_o tween, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameExtensions$$PreventFailSearchDuringAnimation
   PrimeTween_Tween_o Rotatelab_GameExtensions__PreventFailSearchDuringAnimation (PrimeTween_Tween_o
   tween, const MethodInfo* method); */

void Rotatelab_GameExtensions__PreventFailSearchDuringAnimation_fb532c
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_38 [16];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_00fc54cc + 0xfc5348);
  uStack_1c = param_6;
  uStack_20 = param_5;
  uStack_28 = param_3;
  uStack_24 = param_4;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc54d0 + 0xfc5370));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc54d4 + 0xfc537c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc54d8 + 0xfc5388));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc54dc + 0xfc5394));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc54e0 + 0xfc53a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc54e4 + 0xfc53ac));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fc54e8 + 0xfc53c0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Scripts_LevelStateManager__PreventFailSearchWithinScope_1017a60(iVar1,0);
  piVar5 = *(int **)(_UNK_00fc54ec + 0xfc53f0);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[5];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fc54f0 + 0xfc5438));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_00fc54f4 + 0xfc5458),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 0x14);
    *piVar5 = iVar6;
    thunk_FUN_00ec5080(piVar5,iVar6);
  }
  if (*(int *)(**(int **)(_UNK_00fc54f8 + 0xfc5480) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (auStack_38,&uStack_28,uVar2,iVar6,0,**(undefined4 **)(_UNK_00fc54fc + 0xfc54a8));
  *param_1 = CONCAT44(uStack_24,uStack_28);
  param_1[1] = CONCAT44(uStack_1c,uStack_20);
  return;
}

