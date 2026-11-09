/* IL2CPP: Rotatelab.Boosters.CannonRig$$SetOffVisual
void Rotatelab_Boosters_CannonRig__SetOffVisual (Rotatelab_Boosters_CannonRig_o* __this, bool isOff, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonRig$$SetOffVisual
   void Rotatelab_Boosters_CannonRig__SetOffVisual (Rotatelab_Boosters_CannonRig_o* __this, bool
   isOff, const MethodInfo* method); */

void Rotatelab_Boosters_CannonRig__SetOffVisual_1134b8c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01144d60 + 0x1144ba8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01144d64 + 0x1144bbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01144d68 + 0x1144bc8));
    *pcVar3 = '\x01';
  }
  piVar5 = (int *)(param_1 + 0xa4);
  if (*piVar5 == 0) {
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01144d6c + 0x1144bec));
    UnityEngine_MaterialPropertyBlock___ctor_35c3c50(iVar1,0);
    *piVar5 = iVar1;
    thunk_FUN_00ec5080(piVar5,iVar1);
  }
  uVar7 = 0x3f800000;
  uVar8 = 0x3f800000;
  uStack_28 = 0x3f800000;
  uStack_2c = 0x3f800000;
  if (param_2 != 0) {
    piVar4 = *(int **)(_UNK_01144d70 + 0x1144c34);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar4;
    }
    iVar1 = *(int *)(iVar1 + 0x5c);
    uVar8 = *(undefined4 *)(iVar1 + 4);
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uStack_2c = *(undefined4 *)(iVar1 + 0xc);
    uStack_28 = *(undefined4 *)(iVar1 + 0x10);
  }
  uVar9 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x24) + 0xc) <= (int)uVar9) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar9) break;
    iVar1 = *(int *)(iVar1 + uVar9 * 4 + 0x10);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Renderer__GetPropertyBlock_35c5108(iVar1,*piVar5,0);
    piVar4 = *(int **)(_UNK_01144d74 + 0x1144cd8);
    iVar6 = *piVar5;
    iVar2 = *piVar4;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar4;
    }
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_MaterialPropertyBlock__SetColor_35c40d0
              (iVar6,**(undefined4 **)(iVar2 + 0x5c),uVar8,uVar7,uStack_2c,uStack_28,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Renderer__SetPropertyBlock_35c5100(iVar1,*piVar5,0);
    uVar9 = uVar9 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

