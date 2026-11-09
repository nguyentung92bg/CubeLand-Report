/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$CreateHitParticle
void Rotatelab_Scripts_IceWrapperController__CreateHitParticle (Rotatelab_Scripts_IceWrapperController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$CreateHitParticle
   void Rotatelab_Scripts_IceWrapperController__CreateHitParticle
   (Rotatelab_Scripts_IceWrapperController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_IceWrapperController__CreateHitParticle_1010b50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01020e1c + 0x1020b68);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020e20 + 0x1020b7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020e24 + 0x1020b88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020e28 + 0x1020b94));
    *pcVar5 = '\x01';
  }
  uVar6 = *(undefined4 *)(param_1 + 0x20);
  uStack_28 = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x14),0);
  if (*(int *)(**(int **)(_UNK_01020e2c + 0x1020bd4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__Instantiate_object__14d4dd0
                    (uVar6,uVar1,**(undefined4 **)(_UNK_01020e30 + 0x1020bf4));
  piVar7 = (int *)(param_1 + 0x28);
  *piVar7 = iVar2;
  thunk_FUN_00ec5080(piVar7,iVar2);
  if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(*piVar7,0);
  pcVar5 = (char *)(_UNK_01020e34 + 0x1020c3c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020e38 + 0x1020c50));
    *pcVar5 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01020e3c + 0x1020c68);
  puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c(iVar2,*puVar3,puVar3[1],puVar3[2],0);
  if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(*piVar7,0);
  pcVar5 = (char *)(_UNK_01020e40 + 0x1020cc0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020e44 + 0x1020cd4));
    *pcVar5 = '\x01';
  }
  puVar3 = *(undefined4 **)(**(int **)(_UNK_01020e48 + 0x1020cec) + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localRotation_361507c(iVar2,*puVar3,puVar3[1],puVar3[2],puVar3[3],0);
  if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(*piVar7,0);
  pcVar5 = (char *)(_UNK_01020e4c + 0x1020d50);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01020e50 + 0x1020d64));
    *pcVar5 = '\x01';
  }
  iVar4 = *(int *)(*piVar8 + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar2,*(undefined4 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x10),
             *(undefined4 *)(iVar4 + 0x14),0);
  if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = UnityEngine_ParticleSystem__get_shape_368ed50(*piVar7,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__GetComponent_object__143f3b0
                    (*(int *)(param_1 + 0x14),**(undefined4 **)(_UNK_01020e54 + 0x1020de0));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = UnityEngine_MeshFilter__get_sharedMesh_35cdfcc(iVar2,0);
  UnityEngine_ParticleSystem_ShapeModule__set_mesh_368f9b4(&uStack_28,uVar6,0);
  return;
}

