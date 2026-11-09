/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$SpawnPlank
void Rotatelab_Scripts_ColorBoxPlankLayer__SpawnPlank (Rotatelab_Scripts_ColorBoxPlankLayer_o* __this, UnityEngine_Vector3_o localPos, UnityEngine_Quaternion_o localRot, float uniformScale, System_Collections_Generic_List_Transform__o* faceList, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$SpawnPlank
   void Rotatelab_Scripts_ColorBoxPlankLayer__SpawnPlank (Rotatelab_Scripts_ColorBoxPlankLayer_o*
   __this, UnityEngine_Vector3_o localPos, UnityEngine_Quaternion_o localRot, float uniformScale,
   System_Collections_Generic_List_Transform__o* faceList, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxPlankLayer__SpawnPlank_1000580
               (int param_1,float param_2,float param_3,float param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,float param_9,int param_10)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  float fVar9;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  pcVar5 = (char *)(_UNK_010108ac + 0x10105a8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010108b0 + 0x10105c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010108b4 + 0x10105cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010108b8 + 0x10105d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010108bc + 0x10105e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010108c0 + 0x10105f0));
    *pcVar5 = '\x01';
  }
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(**(int **)(_UNK_010108c4 + 0x1010618) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__Instantiate_object__14d4e4c
                    (uVar7,uVar1,0,**(undefined4 **)(_UNK_010108c8 + 0x1010640));
  fVar9 = *(float *)(param_1 + 0x40);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c
            (iVar2,fVar9 * param_2,fVar9 * param_3,fVar9 * param_4,0);
  UnityEngine_Transform__set_localRotation_361507c(iVar2,param_5,param_6,param_7,param_8,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(&fStack_4c,*(int *)(param_1 + 0x10),0);
  fVar9 = *(float *)(param_1 + 0x40);
  piVar6 = *(int **)(_UNK_010108cc + 0x1010720);
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar6;
  }
  pfVar4 = *(float **)(iVar3 + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar2,fStack_4c * param_9 * fVar9 * *pfVar4,fStack_48 * param_9 * fVar9 * pfVar4[1],
             fStack_44 * param_9 * fVar9 * pfVar4[2],0);
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(iVar2,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__GetComponent_object__143f3b0
                    (iVar2,**(undefined4 **)(_UNK_010108d0 + 0x10107f8));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Renderer__set_sharedMaterial_35c59bc(iVar3,*(undefined4 *)(param_1 + 0x34),0);
  if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_10 + 8);
  uVar8 = *(uint *)(param_10 + 0xc);
  piVar6 = *(int **)(_UNK_010108d4 + 0x1010850);
  *(int *)(param_10 + 0x10) = *(int *)(param_10 + 0x10) + 1;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar8 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(param_10 + 0xc) = uVar8 + 1;
    piVar6 = (int *)(iVar3 + uVar8 * 4 + 0x10);
    *piVar6 = iVar2;
    thunk_FUN_00ec5080(piVar6,iVar2);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (param_10,iVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
  }
  return;
}

