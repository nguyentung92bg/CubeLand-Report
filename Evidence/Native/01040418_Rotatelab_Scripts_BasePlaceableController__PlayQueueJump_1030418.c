/* IL2CPP: Rotatelab.Scripts.BasePlaceableController$$PlayQueueJump
void Rotatelab_Scripts_BasePlaceableController__PlayQueueJump (Rotatelab_Scripts_BasePlaceableController_o* __this, bool isMovingToActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BasePlaceableController$$PlayQueueJump
   void Rotatelab_Scripts_BasePlaceableController__PlayQueueJump
   (Rotatelab_Scripts_BasePlaceableController_o* __this, bool isMovingToActive, const MethodInfo*
   method); */

void Rotatelab_Scripts_BasePlaceableController__PlayQueueJump_1030418(int param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  pcVar1 = (char *)(_UNK_01040544 + 0x104043c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01040548 + 0x1040450));
    *pcVar1 = '\x01';
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__get_localPosition_3613b6c(&uStack_48,*(int *)(param_1 + 0x14),0);
    *(undefined1 *)(param_1 + 0x38) = 1;
    *(float *)(param_1 + 0x3c) = fStack_44;
    fVar4 = fStack_44;
  }
  else {
    fVar4 = *(float *)(param_1 + 0x3c);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,9,0);
  if (*(int *)(**(int **)(_UNK_0104054c + 0x10404c4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar3 = 0.5;
  if (param_2 != 0) {
    fVar3 = 0.75;
  }
  PrimeTween_Tween__LocalPositionY_2ce5b74
            (&uStack_48,uVar2,fVar4,fVar3 + fVar4,0x3e000000,uStack_48,fStack_44,uStack_40,uStack_3c
             ,uStack_38,2,3,0,0,0,0);
  return;
}

