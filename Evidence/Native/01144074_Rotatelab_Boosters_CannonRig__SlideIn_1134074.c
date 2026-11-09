/* IL2CPP: Rotatelab.Boosters.CannonRig$$SlideIn
void Rotatelab_Boosters_CannonRig__SlideIn (Rotatelab_Boosters_CannonRig_o* __this, System_Action_o* onComplete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonRig$$SlideIn
   void Rotatelab_Boosters_CannonRig__SlideIn (Rotatelab_Boosters_CannonRig_o* __this,
   System_Action_o* onComplete, const MethodInfo* method); */

void Rotatelab_Boosters_CannonRig__SlideIn_1134074(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  pcVar4 = (char *)(_UNK_01144200 + 0x1144098);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01144204 + 0x11440ac));
    *pcVar4 = '\x01';
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  if (*(int *)(**(int **)(_UNK_01144208 + 0x11440f4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined8 *)(param_1 + 0x50),0);
  uVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  uVar3 = *(undefined4 *)(param_1 + 0x3c);
  uVar7 = *(undefined4 *)(param_1 + 0x38);
  uVar6 = *(undefined4 *)(param_1 + 0x40);
  uVar5 = *(undefined4 *)(param_1 + 0x44);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,0x1b,0);
  PrimeTween_Tween__LocalPosition_2ce550c
            (&uStack_48,uVar2,uVar7,uVar3,uVar6,uVar5,uStack_48,uStack_44,uStack_40,uStack_3c,
             uStack_38,1,0,0,0,0,0);
  *(undefined8 *)(param_1 + 0x50) = CONCAT44(uStack_44,uStack_48);
  *(ulonglong *)(param_1 + 0x58) = CONCAT44(uStack_3c,uStack_40);
  thunk_FUN_00ec5080(param_1 + 0x58,0);
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x44);
    if (*(int *)(**(int **)(_UNK_0114420c + 0x11441bc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Delay_2ce9f2c(&uStack_48,uVar2,param_2,0,0,0);
  }
  return;
}

