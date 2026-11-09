/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$Get
UnityEngine_Pool_PooledObject_ParticleSystem__o Rotatelab_Pool_WoodPlankShatterPool__Get (Rotatelab_Pool_WoodPlankShatterPool_o* __this, UnityEngine_ParticleSystem_o** v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$Get
   UnityEngine_Pool_PooledObject_ParticleSystem__o Rotatelab_Pool_WoodPlankShatterPool__Get
   (Rotatelab_Pool_WoodPlankShatterPool_o* __this, UnityEngine_ParticleSystem_o** v, const
   MethodInfo* method); */

void Rotatelab_Pool_WoodPlankShatterPool__Get_1104cf8
               (undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01114d74 + 0x1114d14);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114d78 + 0x1114d28));
    *pcVar3 = '\x01';
  }
  uVar1 = Rotatelab_Pool_WoodPlankShatterPool__Get_1104b24(param_2);
  *param_3 = uVar1;
  thunk_FUN_00ec5080(param_3,uVar1);
  uVar1 = *param_3;
  puVar2 = *(undefined4 **)(_UNK_01114d7c + 0x1114d5c);
  *param_1 = 0;
  param_1[1] = 0;
  UnityEngine_Pool_PooledObject_object____ctor_187000c(param_1,uVar1,param_2,*puVar2);
  return;
}

