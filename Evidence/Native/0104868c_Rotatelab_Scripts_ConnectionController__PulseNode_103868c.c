/* IL2CPP: Rotatelab.Scripts.ConnectionController$$PulseNode
void Rotatelab_Scripts_ConnectionController__PulseNode (Rotatelab_Scripts_ConnectionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ConnectionController$$PulseNode
   void Rotatelab_Scripts_ConnectionController__PulseNode (Rotatelab_Scripts_ConnectionController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_ConnectionController__PulseNode_103868c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_010487d8 + 0x10486a4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010487dc + 0x10486b8));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x14),0);
  pcVar4 = (char *)(_UNK_010487e0 + 0x10486ec);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010487e4 + 0x1048700));
    *pcVar4 = '\x01';
  }
  iVar2 = *(int *)(**(int **)(_UNK_010487e8 + 0x104871c) + 0x5c);
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  uVar5 = *(undefined4 *)(iVar2 + 0x10);
  uVar6 = *(undefined4 *)(iVar2 + 0x14);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_38,0x1b,0);
  if (*(int *)(**(int **)(_UNK_010487ec + 0x104874c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce679c
            (&uStack_38,uVar1,uVar3,uVar5,uVar6,0x3f99999a,0x3fa66666,0x3f99999a,0x3d23d70a,
             uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28,2,3,0x3da3d70a,0,0,0);
  return;
}

