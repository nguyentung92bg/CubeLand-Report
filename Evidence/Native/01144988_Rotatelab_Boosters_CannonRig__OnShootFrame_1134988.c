/* IL2CPP: Rotatelab.Boosters.CannonRig$$OnShootFrame
void Rotatelab_Boosters_CannonRig__OnShootFrame (Rotatelab_Boosters_CannonRig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.CannonRig$$OnShootFrame
   void Rotatelab_Boosters_CannonRig__OnShootFrame (Rotatelab_Boosters_CannonRig_o* __this, const
   MethodInfo* method); */

void Rotatelab_Boosters_CannonRig__OnShootFrame_1134988(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01144b2c + 0x11449a0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01144b30 + 0x11449b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01144b34 + 0x11449c0));
    *pcVar5 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01144b38 + 0x11449d4);
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar6,0,0);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_ParticleSystem__Play_368e960(*(int *)(param_1 + 0x1c),0);
  }
  puVar7 = (undefined4 *)(param_1 + 0x80);
  uVar6 = *puVar7;
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Equality_36033f4(uVar6,0,0);
  if (iVar3 != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x20);
    iVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = UnityEngine_Transform__get_parent_36148d8(iVar3,0);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar6 = UnityEngine_Object__Instantiate_object__14d4dd0
                      (uVar6,uVar4,**(undefined4 **)(_UNK_01144b3c + 0x1144aa4));
    *puVar7 = uVar6;
    thunk_FUN_00ec5080(puVar7,uVar6);
  }
  iVar3 = *(int *)(param_1 + 0x80);
  Rotatelab_Boosters_CannonRig__get_MuzzlePosition_1133ef4(&uStack_30,param_1);
  puVar7 = (undefined4 *)(param_1 + 0x90);
  if (iVar3 != 0) {
    Rotatelab_Boosters_CannonProjectileController__Fire_1133858
              (iVar3,uStack_30,uStack_2c,uStack_28,*(undefined4 *)(param_1 + 0x84),
               *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),*puVar7);
    *puVar7 = 0;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar7 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar7 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

