/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$OnRequested
void Rotatelab_Pool_WoodPlankShatterPool__OnRequested (Rotatelab_Pool_WoodPlankShatterPool_o* __this, int32_t colorType, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, float scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$OnRequested
   void Rotatelab_Pool_WoodPlankShatterPool__OnRequested (Rotatelab_Pool_WoodPlankShatterPool_o*
   __this, int32_t colorType, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation,
   float scale, const MethodInfo* method); */

void Rotatelab_Pool_WoodPlankShatterPool__OnRequested_1104864
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,float param_10)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 uStack_30;
  float fStack_2c;
  int iStack_28;
  
  pcVar6 = (char *)(_UNK_01114b08 + 0x1114888);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114b0c + 0x111489c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114b10 + 0x11148a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114b14 + 0x11148b4));
    *pcVar6 = '\x01';
  }
  iStack_28 = 0;
  fStack_2c = 0.0;
  uStack_30 = 0;
  iVar1 = Rotatelab_Pool_WoodPlankShatterPool__Get_1104b24(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(iVar1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetPositionAndRotation_3615c58
            (iVar2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
                    (*(int *)(param_1 + 0x2c),iVar1,&iStack_28,
                     **(undefined4 **)(_UNK_01114b18 + 0x1114964));
  if (iVar2 != 0) {
    if (iStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar3 = (int *)UnityEngine_Renderer__get_sharedMaterials_35c59c0(iStack_28,0);
    if (-1 < *(int *)(param_1 + 0x1c)) {
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(param_1 + 0x1c) < piVar3[3]) {
        uVar7 = *(uint *)(param_1 + 0x1c);
        iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                          (**(undefined4 **)(_UNK_01114b1c + 0x11149c4));
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = Rotatelab_Scripts_ColorBoxColorDataSO__GetParticleMaterial_ff5108(iVar2,param_2,0);
        if ((iVar2 != 0) &&
           (iVar4 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar4 == 0)) {
          uVar5 = thunk_FUN_00f08b98();
          func_0x00ec3920(uVar5,0);
        }
        if ((uint)piVar3[3] <= uVar7) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar3[uVar7 + 4] = iVar2;
        thunk_FUN_00ec5080(piVar3 + uVar7 + 4,iVar2);
        if (iStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Renderer__set_sharedMaterials_35c59c4(iStack_28,piVar3,0);
      }
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Collections_Generic_Dictionary_object__float___TryGetValue_20729bc
                    (*(int *)(param_1 + 0x28),iVar1,&fStack_2c,
                     **(undefined4 **)(_UNK_01114b20 + 0x1114a80));
  if (iVar2 != 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_30 = UnityEngine_ParticleSystem__get_shape_368ed50(iVar1,0);
    iVar2 = UnityEngine_ParticleSystem_ShapeModule__get_enabled_368f8c8(&uStack_30,0);
    if (iVar2 != 0) {
      UnityEngine_ParticleSystem_ShapeModule__set_radius_368f960
                (&uStack_30,fStack_2c * *(float *)(param_1 + 0x18) * param_10,0);
    }
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem__Play_368e864(iVar1,1,0);
  return;
}

